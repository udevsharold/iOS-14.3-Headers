/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {

	NSError* _error;

}

@property (readonly) long long code; 
@property (readonly) NSString * domain; 
@property (readonly) NSString * localizedDescription; 
@property (readonly) NSString * localizedFailureReason; 
@property (readonly) NSString * localizedRecoverySuggestion; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(long long)code;
-(NSString *)localizedFailureReason;
-(id)initWithError:(id)arg1 ;
-(NSString *)localizedRecoverySuggestion;
-(NSString *)localizedDescription;
-(id)attributeKeys;
-(void)dealloc;
-(NSString *)domain;
-(id)_className;
-(id)scriptAttributeKeys;
@end
