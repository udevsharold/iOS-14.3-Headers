/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/PagesQuicklook.framework/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/TSWPOffscreenColumn.h>

@protocol TSWPFlowInfo;
@class TPPageController, NSString;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned long long _pageIndex;
	id<TSWPFlowInfo> _flowInfo;
	TPPageController* _pageController;

}

@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
@property (nonatomic,readonly) BOOL lastLineIsEmptyAndHasListLabel; 
@property (nonatomic,readonly) BOOL terminatedByBreak; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)range;
-(unsigned long long)startCharIndex;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 ;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 flowInfo:(id)arg3 ;
-(id)p_targetFirstHint;
-(id)p_targetLastHint;
-(BOOL)lastLineIsEmptyAndHasListLabel;
-(BOOL)terminatedByBreak;
@end
