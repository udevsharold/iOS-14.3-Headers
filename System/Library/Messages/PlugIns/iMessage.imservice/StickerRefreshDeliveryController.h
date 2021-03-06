/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTMessageDelivery;

@interface StickerRefreshDeliveryController : NSObject {

	FTMessageDelivery* _messageDelivery;

}

@property (nonatomic,retain) FTMessageDelivery * messageDelivery;              //@synthesize messageDelivery=_messageDelivery - In the implementation block
+(id)sharedInstance;
-(void)setMessageDelivery:(FTMessageDelivery *)arg1 ;
-(id)init;
-(void)dealloc;
-(FTMessageDelivery *)messageDelivery;
-(void)sendFTMessage:(id)arg1 attempts:(unsigned long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_sendFTMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

