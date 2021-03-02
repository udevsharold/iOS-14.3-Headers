/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSKit/TSKSosBase.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface TSDAttribution : TSKSosBase <NSCopying> {

	NSString* _title;
	NSString* _descriptionText;
	NSString* _externalURLString;
	NSString* _authorName;
	NSString* _authorURLString;
	BOOL _definedTitle;
	BOOL _definedDescriptionText;
	BOOL _definedExternalURLString;
	BOOL _definedAuthorName;
	BOOL _definedAuthorURLString;

}

@property (nonatomic,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * descriptionText;              //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,readonly) NSURL * externalURL; 
@property (nonatomic,readonly) NSString * authorName;                   //@synthesize authorName=_authorName - In the implementation block
@property (nonatomic,readonly) NSURL * authorURL; 
-(NSString *)descriptionText;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)authorName;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)externalURL;
-(NSString *)title;
-(void)saveToMessage:(Attribution*)arg1 archiver:(id)arg2 ;
-(id)initFromMessage:(const Attribution*)arg1 unarchiver:(id)arg2 ;
-(NSURL *)authorURL;
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 externalURL:(id)arg3 authorName:(id)arg4 authorURL:(id)arg5 ;
@end
