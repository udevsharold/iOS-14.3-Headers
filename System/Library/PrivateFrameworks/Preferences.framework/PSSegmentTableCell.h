/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell {

	NSArray* _values;
	NSDictionary* _titleDict;

}
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(id)controlValue;
-(BOOL)canReload;
-(id)newControl;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setValue:(id)arg1 ;
-(id)titleLabel;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setValues:(id)arg1 titleDictionary:(id)arg2 ;
@end

