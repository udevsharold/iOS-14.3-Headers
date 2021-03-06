/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OABReaderState.h>

@class PXPresentationState, PBPresentationReaderState;

@interface PBOfficeArtReaderState : OABReaderState {

	PXPresentationState* mXmlDocumentState;
	PBPresentationReaderState* mPresentationState;

}

@property (__weak,readonly) PBPresentationReaderState * presentationState; 
-(PBPresentationReaderState *)presentationState;
-(id)xmlDrawingState;
-(id)drawableOnTgtSlideForShapeId:(int)arg1 ;
-(id)xmlDocumentState;
-(id)initWithPresentationState:(id)arg1 ;
@end

