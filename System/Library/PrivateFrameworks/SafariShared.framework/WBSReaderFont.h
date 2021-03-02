/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSReaderFont : NSObject <NSCopying> {

	NSString* _familyName;
	NSString* _displayName;
	NSString* _localizedName;
	BOOL _hasCalculatedLocalizedName;
	long long _type;

}

@property (nonatomic,readonly) NSString * familyName;                           //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSString * familyNameForWebContent; 
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) long long type;                                  //@synthesize type=_type - In the implementation block
+(id)systemFontWithDisplayName:(id)arg1 ;
+(id)fontWithFamilyName:(id)arg1 displayName:(id)arg2 ;
+(id)systemSerifFont;
+(id)systemFont;
-(void)isInstalledWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)fontOfSize:(double)arg1 ;
-(BOOL)isInstalled;
-(NSString *)familyName;
-(id)_localizedName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)familyNameForWebContent;
-(id)_initWithFamilyName:(id)arg1 displayName:(id)arg2 type:(long long)arg3 ;
-(RetainPtr<const __CTFontDescriptor *>*)_fontDescriptorRefForFontFamilyName:(id)arg1 restrictToEnabled:(BOOL)arg2 ;
-(NSString *)displayName;
@end
