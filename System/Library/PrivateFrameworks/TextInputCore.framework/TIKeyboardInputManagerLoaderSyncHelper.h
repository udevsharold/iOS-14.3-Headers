/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {

	NSMutableDictionary* _languages;
	NSMapTable* _pendingSaves;
	/*^block*/id _languageUpdated;

}

@property (nonatomic,copy) id languageUpdated;              //@synthesize languageUpdated=_languageUpdated - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setLanguageUpdated:(id)arg1 ;
-(id)languageUpdated;
-(void)noteObject:(id)arg1 forLanguage:(id)arg2 ;
-(BOOL)shouldCacheObject:(id)arg1 ;
-(void)willLoadLanguage:(id)arg1 ;
-(void)languagesChanged:(id)arg1 ;
-(void)languagePulled:(id)arg1 ;
@end

