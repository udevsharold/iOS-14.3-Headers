/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDShapeInfo.h>

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {

	TSDDrawableInfo* mConnectedFrom;
	TSDDrawableInfo* mConnectedTo;
	struct {
		unsigned connectedFrom : 1;
		unsigned connectedTo : 1;
	}  mInvalidFlags;

}

@property (nonatomic,retain) TSDDrawableInfo * connectedFrom; 
@property (nonatomic,retain) TSDDrawableInfo * connectedTo; 
-(void)acceptVisitor:(id)arg1 ;
-(void)didCopy;
-(void)dealloc;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(id)presetKind;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(BOOL)canAnchor;
-(TSDDrawableInfo *)connectedFrom;
-(TSDDrawableInfo *)connectedTo;
-(void)setConnectedFrom:(TSDDrawableInfo *)arg1 ;
-(void)setConnectedTo:(TSDDrawableInfo *)arg1 ;
-(void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2 ;
-(id)computeLayoutInfoGeometry;
@end

