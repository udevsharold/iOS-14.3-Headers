/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class CHRecognitionResult, UIBezierPath, PKDrawing, AKAnnotation;

@interface AKShapeToCHRecognitionResult : NSObject {

	BOOL _doodlePathIsPrestroked;
	long long _tag;
	CHRecognitionResult* _result;
	UIBezierPath* _doodlePath;
	PKDrawing* _inkDrawing;
	AKAnnotation* _annotation;
	CGRect _doodlePathBoundsInInputView;

}

@property (assign) long long tag;                                   //@synthesize tag=_tag - In the implementation block
@property (retain) CHRecognitionResult * result;                    //@synthesize result=_result - In the implementation block
@property (retain) UIBezierPath * doodlePath;                       //@synthesize doodlePath=_doodlePath - In the implementation block
@property (retain) PKDrawing * inkDrawing;                          //@synthesize inkDrawing=_inkDrawing - In the implementation block
@property (retain) AKAnnotation * annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (assign) CGRect doodlePathBoundsInInputView;              //@synthesize doodlePathBoundsInInputView=_doodlePathBoundsInInputView - In the implementation block
@property (assign) BOOL doodlePathIsPrestroked;                     //@synthesize doodlePathIsPrestroked=_doodlePathIsPrestroked - In the implementation block
-(void)setAnnotation:(AKAnnotation *)arg1 ;
-(void)setResult:(CHRecognitionResult *)arg1 ;
-(CHRecognitionResult *)result;
-(AKAnnotation *)annotation;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)initWith:(long long)arg1 result:(id)arg2 ;
-(UIBezierPath *)doodlePath;
-(CGRect)doodlePathBoundsInInputView;
-(BOOL)doodlePathIsPrestroked;
-(void)setDoodlePath:(UIBezierPath *)arg1 ;
-(void)setDoodlePathIsPrestroked:(BOOL)arg1 ;
-(void)setDoodlePathBoundsInInputView:(CGRect)arg1 ;
-(void)setInkDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)inkDrawing;
@end
