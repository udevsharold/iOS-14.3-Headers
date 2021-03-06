/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSDrawables/TSDMixing.h>

@class TSDPathSource;

@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing> {

	TSDPathSource* mPathSource;

}

@property (nonatomic,retain) TSDPathSource * pathSource; 
-(void)setGeometry:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(void)setPathSource:(TSDPathSource *)arg1 ;
-(TSDPathSource *)pathSource;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3 ;
@end

