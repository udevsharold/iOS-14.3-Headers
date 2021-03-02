/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFTableSection.h>

@interface WFObjectBasedTableSection : WFTableSection {

	long long _cellStyle;
	Class _cellClass;
	/*^block*/id _configurationBlock;

}

@property (nonatomic,readonly) long long cellStyle;                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) Class cellClass;                    //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(id)configurationBlock;
-(Class)cellClass;
-(void)setRepresentedObjects:(id)arg1 ;
-(long long)cellStyle;
-(void)addRepresentedObject:(id)arg1 ;
-(id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 representedObjects:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
@end
