/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BCSRealTimeSignposter : NSObject {

	long long _type;
	unsigned long long _signpostIdentifier;

}

@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long signpostIdentifier;              //@synthesize signpostIdentifier=_signpostIdentifier - In the implementation block
-(unsigned long long)signpostIdentifier;
-(long long)type;
-(id)_initWithType:(long long)arg1 signpostIdentifier:(unsigned long long)arg2 ;
@end
