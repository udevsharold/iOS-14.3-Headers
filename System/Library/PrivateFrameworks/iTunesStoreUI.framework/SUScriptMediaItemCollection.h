/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, SUScriptMediaItem, MPMediaItemCollection;

@interface SUScriptMediaItemCollection : SUScriptObject {

	NSArray* _items;
	SUScriptMediaItem* _representativeItem;
	BOOL _watchingLibrary;

}

@property (nonatomic,readonly) MPMediaItemCollection * nativeCollection; 
@property (readonly) long long count; 
@property (readonly) NSArray * items; 
@property (readonly) NSArray * mediaTypes; 
@property (readonly) SUScriptMediaItem * representativeItem; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(id)attributeKeys;
-(void)dealloc;
-(NSArray *)mediaTypes;
-(NSArray *)items;
-(SUScriptMediaItem *)representativeItem;
-(long long)count;
-(id)_className;
-(id)scriptAttributeKeys;
-(void)_libraryChangedNotification:(id)arg1 ;
-(void)_beginWatchingLibraryIfNecessary;
-(MPMediaItemCollection *)nativeCollection;
@end
