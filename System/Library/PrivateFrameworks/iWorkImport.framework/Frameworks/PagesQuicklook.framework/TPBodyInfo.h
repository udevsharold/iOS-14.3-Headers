/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSDContainerInfo.h>
#import <libobjc.A.dylib/TSKModelRootIndexProvider.h>

@class TPPageInfo, TSWPStorage, TPPageHint, NSArray, TSDInfoGeometry, NSString;

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider> {

	TPPageInfo* _pageInfo;

}

@property (nonatomic,readonly) id<TSWPOffscreenColumn> previousTargetLastColumn; 
@property (nonatomic,readonly) id<TSWPOffscreenColumn> nextTargetFirstColumn; 
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> previousTargetTopicNumbers; 
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> nextTargetTopicNumbers; 
@property (nonatomic,readonly) id<TSDHint> nextTargetFirstChildHint; 
@property (nonatomic,readonly) TSWPStorage * bodyStorage; 
@property (nonatomic,readonly) TSWPStorage * storage; 
@property (nonatomic,readonly) TPPageHint * pageHint; 
@property (nonatomic,readonly) BOOL laysOutVertically; 
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo;                                              //@synthesize pageInfo=_pageInfo - In the implementation block
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) BOOL floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) BOOL anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) BOOL inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) BOOL inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) BOOL attachedToBodyText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL matchesObjectPlaceholderGeometry; 
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(BOOL)isSelectable;
-(TSWPStorage *)storage;
-(Class)layoutClass;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(BOOL)laysOutVertically;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(BOOL)isThemeContent;
-(NSObject*<TSDInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(BOOL)isFloatingAboveText;
-(BOOL)isAnchoredToText;
-(BOOL)isInlineWithText;
-(BOOL)isAttachedToBodyText;
-(NSArray *)childInfos;
-(id<TSWPOffscreenColumn>)previousTargetLastColumn;
-(NSObject*<TSWPTopicNumberHints>)previousTargetTopicNumbers;
-(id<TSWPOffscreenColumn>)nextTargetFirstColumn;
-(NSObject*<TSWPTopicNumberHints>)nextTargetTopicNumbers;
-(id<TSDHint>)nextTargetFirstChildHint;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(BOOL)isInlineWithTextWithWrap;
-(id)infoForSelectionPath:(id)arg1 ;
-(TSWPStorage *)bodyStorage;
-(long long)modelRootIndex;
-(TPPageHint *)pageHint;
-(void)inflateBodyLayout:(id)arg1 ;
@end
