/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>
#import <TSReading/TSDArchivedHint.h>

@class TSTLayoutHint, NSString;

@interface TSTArchivedLayoutHint : TSPObject <TSDArchivedHint> {

	TSTLayoutHint* mHint;

}

@property (nonatomic,retain) TSTLayoutHint * hint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSTLayoutHint *)hint;
-(void)dealloc;
-(void)setHint:(TSTLayoutHint *)arg1 ;
-(id)initWithContext:(id)arg1 hint:(id)arg2 ;
@end

