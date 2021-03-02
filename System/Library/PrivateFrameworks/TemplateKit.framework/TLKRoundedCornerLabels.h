/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

@interface TLKRoundedCornerLabels : TLKStackView {

	NSMutableArray* _roundedLabels;
	unsigned long long _prominence;
	unsigned long long _sizeConfiguration;

}

@property (nonatomic,retain) NSMutableArray * roundedLabels;                    //@synthesize roundedLabels=_roundedLabels - In the implementation block
@property (assign,nonatomic) unsigned long long prominence;                     //@synthesize prominence=_prominence - In the implementation block
@property (assign,nonatomic) unsigned long long sizeConfiguration;              //@synthesize sizeConfiguration=_sizeConfiguration - In the implementation block
-(void)setProminence:(unsigned long long)arg1 ;
-(unsigned long long)prominence;
-(id)init;
-(unsigned long long)sizeConfiguration;
-(void)setSizeConfiguration:(unsigned long long)arg1 ;
-(void)setRoundedLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)roundedLabels;
-(void)updateRoundedText:(id)arg1 ;
@end
