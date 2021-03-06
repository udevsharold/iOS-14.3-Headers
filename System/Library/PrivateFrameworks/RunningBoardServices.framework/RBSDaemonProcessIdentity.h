/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {

	NSString* _daemonJobLabel;

}
-(BOOL)isDaemon;
-(id)_initDaemonWithJobLabel:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(BOOL)isAnonymous;
-(id)daemonJobLabel;
-(id)copyWithEuid:(unsigned)arg1 ;
-(id)debugDescription;
-(BOOL)_matchesIdentity:(id)arg1 ;
@end

