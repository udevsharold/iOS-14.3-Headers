/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ADFlags : NSObject <NSCopying> {

	unsigned long long _flags;

}

@property (assign) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
+(id)initWithFlags:(unsigned long long)arg1 ;
-(BOOL)noneSet;
-(BOOL)isSet:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(unsigned long long)anySet:(unsigned long long)arg1 ;
-(void)set:(unsigned long long)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)allSet:(unsigned long long)arg1 ;
-(unsigned long long)flags;
-(void)unset:(unsigned long long)arg1 ;
@end

