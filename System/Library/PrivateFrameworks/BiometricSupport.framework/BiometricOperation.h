/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BiometricKitXPCExportedClientObject;

@interface BiometricOperation : NSObject {

	int _status;
	unsigned _cancelledMessage;
	BiometricKitXPCExportedClientObject* _client;
	long long _priority;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,retain) BiometricKitXPCExportedClientObject * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) int status;                                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned taskPausedMessage; 
@property (nonatomic,readonly) unsigned taskResumedMessage; 
@property (nonatomic,readonly) unsigned taskResumeFailedMessage; 
@property (nonatomic,readonly) unsigned cancelledMessage;                               //@synthesize cancelledMessage=_cancelledMessage - In the implementation block
-(void)setPriority:(long long)arg1 ;
-(id)init;
-(int)status;
-(id)description;
-(int)type;
-(void)setClient:(BiometricKitXPCExportedClientObject *)arg1 ;
-(BiometricKitXPCExportedClientObject *)client;
-(void)setStatus:(int)arg1 ;
-(long long)priority;
-(unsigned)taskPausedMessage;
-(unsigned)taskResumedMessage;
-(unsigned)taskResumeFailedMessage;
-(unsigned)cancelledMessage;
@end

