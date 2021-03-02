/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTIDocumentTraits, RTIDocumentState;

@interface RTIInputSystemClientSession : NSObject {

	RTIDocumentTraits* _documentTraits;
	RTIDocumentState* _documentState;

}

@property (nonatomic,retain) RTIDocumentTraits * documentTraits;              //@synthesize documentTraits=_documentTraits - In the implementation block
@property (nonatomic,retain) RTIDocumentState * documentState;                //@synthesize documentState=_documentState - In the implementation block
-(RTIDocumentState *)documentState;
-(RTIDocumentTraits *)documentTraits;
-(void)setDocumentState:(RTIDocumentState *)arg1 ;
-(void)setDocumentTraits:(RTIDocumentTraits *)arg1 ;
@end
