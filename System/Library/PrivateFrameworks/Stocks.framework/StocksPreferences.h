/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface StocksPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;
	NSUserDefaults* _sharedDefaults;
	BOOL _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) BOOL changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned long long textDirection;                                 //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) BOOL textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(void)clearSharedPreferences;
+(id)sharedPreferences;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isChangeColorSwapped;
-(void)synchronize;
-(void)resetLocale;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(unsigned long long)textDirection;
-(BOOL)boolForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)textAttachmentDirectionIsRightToLeft;
-(void)removeObjectForKey:(id)arg1 ;
@end
