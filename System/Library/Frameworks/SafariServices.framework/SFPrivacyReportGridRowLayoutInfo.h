/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariServices/SafariServices-Structs.h>
@interface SFPrivacyReportGridRowLayoutInfo : NSObject {

	long long _row;
	double _height;
	NSRange _itemRange;

}

@property (nonatomic,readonly) long long row;                  //@synthesize row=_row - In the implementation block
@property (nonatomic,readonly) NSRange itemRange;              //@synthesize itemRange=_itemRange - In the implementation block
@property (assign,nonatomic) double height;                    //@synthesize height=_height - In the implementation block
-(void)setHeight:(double)arg1 ;
-(double)height;
-(id)initWithRow:(long long)arg1 itemRange:(NSRange)arg2 ;
-(long long)row;
-(NSRange)itemRange;
@end
