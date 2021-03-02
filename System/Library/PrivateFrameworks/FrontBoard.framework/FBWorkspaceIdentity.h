/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBWorkspaceIdentity : NSObject <NSCopying> {

	int _pid;

}

@property (nonatomic,readonly) int pid;              //@synthesize pid=_pid - In the implementation block
+(id)identityWithPid:(int)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)pid;
-(id)_initWithPid:(int)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
@end
