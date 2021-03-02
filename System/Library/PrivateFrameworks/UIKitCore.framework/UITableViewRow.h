/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding> {

	long long _indentationLevel;
	UITableViewCell* _cell;
	double _height;

}

@property (assign,nonatomic) double height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) UITableViewCell * cell;              //@synthesize cell=_cell - In the implementation block
+(id)row;
-(UITableViewCell *)cell;
-(void)setIndentationLevel:(long long)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)height;
-(void)setCell:(UITableViewCell *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)indentationLevel;
-(void)encodeWithCoder:(id)arg1 ;
@end
