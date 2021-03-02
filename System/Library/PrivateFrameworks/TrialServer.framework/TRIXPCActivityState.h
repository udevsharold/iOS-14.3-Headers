/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TRIXPCActivityState : NSObject <NSCopying> {

	unsigned long long _futureCompletionStatus;
	unsigned long long _capabilities;

}

@property (nonatomic,readonly) unsigned long long futureCompletionStatus;              //@synthesize futureCompletionStatus=_futureCompletionStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long capabilities;                        //@synthesize capabilities=_capabilities - In the implementation block
+(id)xPCActivityStateWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)capabilities;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFutureCompletionStatus:(unsigned long long)arg1 capabilities:(unsigned long long)arg2 ;
-(unsigned long long)futureCompletionStatus;
-(BOOL)isEqualToXPCActivityState:(id)arg1 ;
-(id)copyWithReplacementFutureCompletionStatus:(unsigned long long)arg1 ;
-(id)copyWithReplacementCapabilities:(unsigned long long)arg1 ;
@end
