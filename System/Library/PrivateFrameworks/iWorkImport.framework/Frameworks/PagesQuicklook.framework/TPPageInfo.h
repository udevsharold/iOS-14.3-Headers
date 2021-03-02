/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSDContainerInfo.h>
#import <libobjc.A.dylib/TSKModelRootIndexProvider.h>

@protocol TPPageLayoutInfoProvider;
@class TPBodyInfo, TPDocumentRoot, NSArray, TSDInfoGeometry, NSString;

@interface TPPageInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider> {

	unsigned long long _pageIndex;
	TPBodyInfo* _bodyInfo;
	TPDocumentRoot* _documentRoot;
	id<TPPageLayoutInfoProvider> _layoutInfoProvider;

}

@property (nonatomic,readonly) unsigned long long pageIndex;                                             //@synthesize pageIndex=_pageIndex - In the implementation block
@property (nonatomic,readonly) TPBodyInfo * bodyInfo;                                                    //@synthesize bodyInfo=_bodyInfo - In the implementation block
@property (nonatomic,__weak,readonly) TPDocumentRoot * documentRoot;                                     //@synthesize documentRoot=_documentRoot - In the implementation block
@property (nonatomic,__weak,readonly) id<TPPageLayoutInfoProvider> layoutInfoProvider;                   //@synthesize layoutInfoProvider=_layoutInfoProvider - In the implementation block
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
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
+(BOOL)isDocSetupPageIndex:(unsigned long long)arg1 ;
+(BOOL)isAlternativePageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 ;
+(BOOL)hasBodyInfo;
+(BOOL)isPageTemplatePageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 ;
+(unsigned long long)pageIndexFromPageTemplateIndex:(unsigned long long)arg1 ;
+(unsigned long long)pageTemplateIndexFromPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 ;
+(unsigned long long)documentSetupPageIndex;
+(unsigned long long)documentSetupRightSidePageIndex;
+(unsigned long long)documentSetupLeftSidePageIndex;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(BOOL)isSelectable;
-(void)dealloc;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(Class)layoutClass;
-(TPDocumentRoot *)documentRoot;
-(id)copyWithContext:(id)arg1 ;
-(Class)repClass;
-(unsigned long long)pageIndex;
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
-(void)setPrimitiveGeometry:(id)arg1 ;
-(BOOL)isInlineWithTextWithWrap;
-(id)infoForSelectionPath:(id)arg1 ;
-(long long)modelRootIndex;
-(id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3 ;
-(TPBodyInfo *)bodyInfo;
-(id<TPPageLayoutInfoProvider>)layoutInfoProvider;
@end
