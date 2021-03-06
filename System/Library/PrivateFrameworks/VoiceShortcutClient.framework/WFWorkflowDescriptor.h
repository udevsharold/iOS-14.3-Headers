/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>
#import <libobjc.A.dylib/WFGlyphDrawableItem.h>

@class NSString;

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor <WFGlyphDrawableItem> {

	unsigned short _glyphCharacter;
	NSString* _name;
	long long _color;
	CGImageRef _iconImage;
	double _iconImageScale;
	NSString* _associatedAppBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long color;                                            //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) unsigned short glyphCharacter;                              //@synthesize glyphCharacter=_glyphCharacter - In the implementation block
@property (nonatomic,readonly) CGImageRef iconImage;                                       //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,readonly) double iconImageScale;                                      //@synthesize iconImageScale=_iconImageScale - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedAppBundleIdentifier;              //@synthesize associatedAppBundleIdentifier=_associatedAppBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)color;
-(NSString *)associatedAppBundleIdentifier;
-(void)dealloc;
-(CGImageRef)iconImage;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(double)iconImageScale;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIconImage:(CGImageRef)arg1 scale:(double)arg2 ;
-(unsigned short)glyphCharacter;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(long long)arg3 glyphCharacter:(unsigned short)arg4 associatedAppBundleIdentifier:(id)arg5 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end

