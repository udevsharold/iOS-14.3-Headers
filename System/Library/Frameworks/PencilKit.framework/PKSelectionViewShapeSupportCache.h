/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKSelectionViewShapeSupportCache : NSObject {

	NSArray* _shapes;
	NSArray* _originalStrokes;
	long long _shapeType;

}

@property (nonatomic,retain) NSArray * shapes;                       //@synthesize shapes=_shapes - In the implementation block
@property (nonatomic,retain) NSArray * originalStrokes;              //@synthesize originalStrokes=_originalStrokes - In the implementation block
@property (assign,nonatomic) long long shapeType;                    //@synthesize shapeType=_shapeType - In the implementation block
-(NSArray *)shapes;
-(long long)shapeType;
-(void)setShapes:(NSArray *)arg1 ;
-(NSArray *)originalStrokes;
-(void)setOriginalStrokes:(NSArray *)arg1 ;
-(void)setShapeType:(long long)arg1 ;
@end

