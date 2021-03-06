/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentListController.h>

@class _UIDocumentPickerSearchContainerModel, NSString;

@interface _UIDocumentSearchListController : _UIDocumentListController {

	_UIDocumentPickerSearchContainerModel* _model;

}

@property (nonatomic,retain) NSString * queryString; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(id)init;
-(id)initWithModel:(id)arg1 ;
-(BOOL)hideSearchField;
-(Class)_classForChildren;
-(void)itemsOrSelectionDidChange:(BOOL)arg1 ;
@end

