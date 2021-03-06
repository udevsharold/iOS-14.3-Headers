/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface SBHSetDiff : NSObject <NSCopying> {

	NSSet* _fromSet;
	NSSet* _toSet;
	NSSet* _additions;
	NSSet* _deletions;
	NSSet* _updates;

}

@property (nonatomic,readonly) NSSet * additions;              //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) NSSet * deletions;              //@synthesize deletions=_deletions - In the implementation block
@property (nonatomic,readonly) NSSet * updates;                //@synthesize updates=_updates - In the implementation block
@property (nonatomic,readonly) NSSet * fromSet;                //@synthesize fromSet=_fromSet - In the implementation block
@property (nonatomic,readonly) NSSet * toSet;                  //@synthesize toSet=_toSet - In the implementation block
+(id)diffFromSet:(id)arg1 toSet:(id)arg2 ;
-(NSSet *)fromSet;
-(NSSet *)additions;
-(NSSet *)deletions;
-(NSSet *)toSet;
-(id)_initWithFromSet:(id)arg1 toSet:(id)arg2 additions:(id)arg3 deletions:(id)arg4 updates:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSSet *)updates;
-(BOOL)isEqual:(id)arg1 ;
@end

