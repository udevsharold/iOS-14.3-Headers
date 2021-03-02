/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ICSearchResult;


@protocol ICNotePreviewing <NSObject>
@property (nonatomic,readonly) id<ICSearchIndexableNote> note; 
@property (nonatomic,readonly) ICSearchResult * searchResult; 
@required
-(ICSearchResult *)searchResult;
-(void)setupPreview;
-(id<ICSearchIndexableNote>)note;
-(id)initWithNote:(id)arg1;
-(id)initWithNote:(id)arg1 searchResult:(id)arg2;
-(void)setupPreviewWithInitialFrame:(CGRect)arg1;

@end
