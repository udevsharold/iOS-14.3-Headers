/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRE/CoreRE-Structs.h>
#import <libobjc.A.dylib/REResourceFetchService.h>

@class NSString;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService> {

	int _pid;
	int _pidversion;
	ResourceFetchManager* _resourceFetchManager;

}

@property (nonatomic,readonly) ResourceFetchManager* resourceFetchManager;              //@synthesize resourceFetchManager=_resourceFetchManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * redactedDescription; 
@property (nonatomic,readonly) int pid;                                                 //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int pidversion;                                          //@synthesize pidversion=_pidversion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)pid;
-(NSString *)description;
-(NSString *)redactedDescription;
-(void)invalidate;
-(void)associateConnectionWithPeerID:(unsigned long long)arg1 ;
-(id)initWithResourceFetchManager:(ResourceFetchManager*)arg1 connection:(const Connection*)arg2 ;
-(ResourceFetchManager*)resourceFetchManager;
-(int)pidversion;
@end
