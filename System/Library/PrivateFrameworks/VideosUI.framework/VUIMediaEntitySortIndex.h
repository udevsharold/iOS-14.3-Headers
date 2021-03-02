/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUIMediaEntitySortIndex : NSObject {

	NSString* _title;
	unsigned long long _startIndex;
	unsigned long long _count;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long startIndex;              //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) unsigned long long count;                   //@synthesize count=_count - In the implementation block
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)count;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)startIndex;
-(NSString *)title;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 startIndex:(unsigned long long)arg2 count:(unsigned long long)arg3 ;
@end
