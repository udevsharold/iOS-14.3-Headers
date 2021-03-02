/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SDTraceItem, NSString;

@interface SDTrace : NSObject {

	SDTraceItem* _items[32];
	int _current;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) int current;                 //@synthesize current=_current - In the implementation block
+(void)initialize;
-(id)initWithTitle:(id)arg1 ;
-(long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5 ;
-(id)init;
-(int)current;
-(id)items;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
