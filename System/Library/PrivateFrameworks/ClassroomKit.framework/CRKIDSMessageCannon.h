/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKIDSPrimitives;
@class CRKIDSMessageFormatter;

@interface CRKIDSMessageCannon : NSObject {

	id<CRKIDSPrimitives> _IDSPrimitives;
	CRKIDSMessageFormatter* _messageFormatter;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> IDSPrimitives;                     //@synthesize IDSPrimitives=_IDSPrimitives - In the implementation block
@property (nonatomic,readonly) CRKIDSMessageFormatter * messageFormatter;              //@synthesize messageFormatter=_messageFormatter - In the implementation block
-(id<CRKIDSPrimitives>)IDSPrimitives;
-(id)initWithIDSPrimitives:(id)arg1 ;
-(void)sendIDSMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(CRKIDSMessageFormatter *)messageFormatter;
@end

