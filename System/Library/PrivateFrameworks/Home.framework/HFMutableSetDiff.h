/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFSetDiff.h>

@interface HFMutableSetDiff : HFSetDiff {

	BOOL _hasChanges;

}

@property (nonatomic,readonly) BOOL hasChanges;              //@synthesize hasChanges=_hasChanges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)deleteAllObjects;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)addObject:(id)arg1 ;
-(BOOL)hasChanges;
-(void)deleteObject:(id)arg1 ;
-(id)initWithFromSet:(id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(void)_updateHasChanges;
@end

