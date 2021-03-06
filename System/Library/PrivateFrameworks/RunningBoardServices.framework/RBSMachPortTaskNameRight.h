/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RBSAuditToken, NSString;

@interface RBSMachPortTaskNameRight : NSObject <RBSXPCCoding, NSSecureCoding, NSCopying> {

	unsigned _port;
	os_unfair_lock_s _lock;
	int _pid;
	RBSAuditToken* _auditToken;

}

@property (nonatomic,readonly) int pid;                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) RBSAuditToken * auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)portForSelf;
+(id)taskNameForPID:(int)arg1 ;
-(id)initWithPID:(int)arg1 ;
-(unsigned)port;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(RBSAuditToken *)auditToken;
-(BOOL)isUsable;
-(void)invalidate;
-(void)encodeWithCoder:(id)arg1 ;
@end

