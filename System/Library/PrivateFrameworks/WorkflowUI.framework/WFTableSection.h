/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFTreeObserver.h>

@class NSString, WFTableSectionTreeNode, NSMutableArray, WFTableDataSource;

@interface WFTableSection : NSObject <WFTreeObserver> {

	NSString* _headerText;
	NSString* _footerText;
	WFTableSectionTreeNode* _node;
	NSMutableArray* _mutableItems;

}

@property (nonatomic,readonly) WFTableSectionTreeNode * node;                      //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableItems;                      //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,__weak,readonly) WFTableDataSource * dataSource; 
@property (nonatomic,retain) NSString * headerText;                                //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * footerText;                                //@synthesize footerText=_footerText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)section;
+(id)sectionWithItems:(id)arg1 ;
+(id)sectionWithStyle:(long long)arg1 representedObjects:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
+(id)sectionWithCellClass:(Class)arg1 representedObjects:(id)arg2 configurationBlock:(/*^block*/id)arg3 ;
-(id)initWithItems:(id)arg1 ;
-(WFTableSectionTreeNode *)node;
-(unsigned long long)currentIndex;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(NSString *)footerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)headerText;
-(WFTableDataSource *)dataSource;
-(void)setFooterText:(NSString *)arg1 ;
-(id)tableView;
-(NSMutableArray *)mutableItems;
-(void)treeNode:(id)arg1 flattenedDescendentsDidChangeFrom:(id)arg2 to:(id)arg3 changeSource:(id)arg4 ;
-(void)applyItems:(id)arg1 ;
-(void)updateCellForItem:(id)arg1 ;
-(unsigned long long)recursiveChildrenCount;
@end

