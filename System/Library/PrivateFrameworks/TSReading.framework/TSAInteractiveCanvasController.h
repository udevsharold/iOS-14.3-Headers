/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPInteractiveCanvasController.h>

@class TSDDrawableInfo, TSAAnnotationController;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController {

	TSDDrawableInfo* mInfoBeingDragInserted;
	BOOL _supportsAnnotations;
	TSAAnnotationController* _annotationController;

}

@property (nonatomic,retain) TSDDrawableInfo * infoBeingDragInserted; 
@property (nonatomic,readonly) BOOL wantsCanvasReferenceController; 
@property (nonatomic,readonly) BOOL supportsAnnotations;                                    //@synthesize supportsAnnotations=_supportsAnnotations - In the implementation block
@property (nonatomic,readonly) TSAAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)selectAll:(id)arg1 ;
-(void)dealloc;
-(void)teardown;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(TSAAnnotationController *)annotationController;
-(void)loadDocument;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(TSDDrawableInfo *)infoBeingDragInserted;
-(void)unloadDocument;
-(void)handleHyperlinkGesture:(id)arg1 ;
-(void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasEmptyWPSelection;
-(BOOL)requiresSimilarInfos;
-(BOOL)hasInspectableSelection;
-(id)p_activeTextRep;
-(BOOL)wantsCanvasReferenceController;
-(void)setInfoBeingDragInserted:(TSDDrawableInfo *)arg1 ;
-(BOOL)supportsAnnotations;
@end
