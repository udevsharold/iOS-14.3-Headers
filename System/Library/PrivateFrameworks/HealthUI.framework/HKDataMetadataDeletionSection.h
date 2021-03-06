/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSection.h>

@protocol HKDataMetadataDeletionSectionDelegate;
@class UITableViewCell, NSString;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection {

	BOOL _enabled;
	id<HKDataMetadataDeletionSectionDelegate> _delegate;
	UITableViewCell* _cell;
	NSString* _title;

}

@property (nonatomic,retain) UITableViewCell * cell;                                                 //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) id<HKDataMetadataDeletionSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
-(UITableViewCell *)cell;
-(id)initWithTitle:(id)arg1 ;
-(id)init;
-(BOOL)isEnabled;
-(void)setCell:(UITableViewCell *)arg1 ;
-(void)setDelegate:(id<HKDataMetadataDeletionSectionDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)title;
-(id<HKDataMetadataDeletionSectionDelegate>)delegate;
-(unsigned long long)numberOfRowsInSection;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCellForEnabledState;
@end

