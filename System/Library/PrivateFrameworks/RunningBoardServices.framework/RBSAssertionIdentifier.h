/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/RBSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RBSAssertionIdentifier : NSObject <RBSXPCSecureCoding, NSCopying> {

	NSString* _desc;
	unsigned long long _hash;
	int _serverPid;
	int _clientPid;
	unsigned long long _count;

}

@property (nonatomic,readonly) int serverPid;                         //@synthesize serverPid=_serverPid - In the implementation block
@property (nonatomic,readonly) int clientPid;                         //@synthesize clientPid=_clientPid - In the implementation block
@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierWithClientPid:(int)arg1 ;
+(BOOL)supportsRBSXPCSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(int)clientPid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(int)serverPid;
@end

