/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWStillImageProcessorInput.h>

@class BWDeferredProcessorController, BWDeferredProcessingContainer, NSString;

@interface BWDeferredProcessorControllerInput : BWStillImageProcessorInput {

	BWDeferredProcessorController* _processorController;
	BWDeferredProcessingContainer* _container;
	NSString* _photoIdentifier;

}

@property (assign,nonatomic) BWDeferredProcessorController * processorController;              //@synthesize processorController=_processorController - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                      //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) NSString * photoIdentifier;                                     //@synthesize photoIdentifier=_photoIdentifier - In the implementation block
-(BWDeferredProcessingContainer *)container;
-(BWDeferredProcessorController *)processorController;
-(void)setProcessorController:(BWDeferredProcessorController *)arg1 ;
-(void)dealloc;
-(void)setContainer:(id)arg1 photoIdentifier:(id)arg2 ;
-(NSString *)photoIdentifier;
@end
