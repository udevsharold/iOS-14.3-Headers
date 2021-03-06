/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSDEditableBezierPathSource, TSUPointerKeyDictionary;

@interface TSDEditableBezierPathSourceMorphInfo : NSObject {

	TSDEditableBezierPathSource* mOriginal;
	TSDEditableBezierPathSource* mSmoothOriginal;
	TSUPointerKeyDictionary* mOriginalNodeIndexMapping;

}

@property (nonatomic,retain) TSDEditableBezierPathSource * original; 
@property (nonatomic,retain) TSDEditableBezierPathSource * smoothOriginal; 
-(void)setOriginal:(TSDEditableBezierPathSource *)arg1 ;
-(void)dealloc;
-(TSDEditableBezierPathSource *)original;
-(id)initWithEditableBezierPathSource:(id)arg1 ;
-(id)originalNodeForNode:(id)arg1 ;
-(unsigned long long)originalSubpathIndexForNode:(id)arg1 ;
-(unsigned long long)originalNodeIndexForNode:(id)arg1 ;
-(id)originalSmoothNodeForNode:(id)arg1 ;
-(TSDEditableBezierPathSource *)smoothOriginal;
-(void)setSmoothOriginal:(TSDEditableBezierPathSource *)arg1 ;
@end

