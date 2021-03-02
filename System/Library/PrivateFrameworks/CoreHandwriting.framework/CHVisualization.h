/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHVisualizationDelegate;
#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class CHRecognitionSession;

@interface CHVisualization : NSObject {

	CHRecognitionSession* _recognitionSession;
	id<CHVisualizationDelegate> _delegate;

}

@property (nonatomic,readonly) long long layeringPriority; 
@property (nonatomic,readonly) BOOL wantsInputDrawings; 
@property (nonatomic,retain,readonly) CHRecognitionSession * recognitionSession;              //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (assign,nonatomic) id<CHVisualizationDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<CHVisualizationDelegate>)arg1 ;
-(id<CHVisualizationDelegate>)delegate;
-(id)initWithRecognitionSession:(id)arg1 ;
-(CHRecognitionSession *)recognitionSession;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(long long)layeringPriority;
-(BOOL)wantsInputDrawings;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
@end
