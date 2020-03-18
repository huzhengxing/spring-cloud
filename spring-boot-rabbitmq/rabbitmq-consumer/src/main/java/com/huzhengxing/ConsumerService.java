package com.huzhengxing;

import lombok.extern.slf4j.Slf4j;
import org.springframework.amqp.rabbit.annotation.RabbitListener;
import org.springframework.scheduling.annotation.EnableScheduling;
import org.springframework.stereotype.Component;

@Component
@Slf4j
@EnableScheduling
public class ConsumerService {

    @RabbitListener(queues = "myQueue")
    public void listen(String content) {
        log.info("接收消息:{}",content);
    }
}
