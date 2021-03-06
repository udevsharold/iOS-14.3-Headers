/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSKit.framework/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPObject.h>

@class TSPObject, TSPDocumentRevision;

@interface TSKViewState : TSPObject {

	TSPObject* _viewStateRoot;
	TSPDocumentRevision* _documentRevision;

}

@property (nonatomic,retain) TSPObject * viewStateRoot;                         //@synthesize viewStateRoot=_viewStateRoot - In the implementation block
@property (nonatomic,copy) TSPDocumentRevision * documentRevision;              //@synthesize documentRevision=_documentRevision - In the implementation block
-(id)packageLocator;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSPObject *)viewStateRoot;
-(id)initWithContext:(id)arg1 viewStateRoot:(id)arg2 ;
-(void)setViewStateRoot:(TSPObject *)arg1 ;
-(void)setDocumentRevision:(TSPDocumentRevision *)arg1 ;
-(TSPDocumentRevision *)documentRevision;
@end

