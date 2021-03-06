/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUIStructuredThemeStorage2
@optional
-(void)removeImageNamed:(id)arg1 withDescription:(id)arg2;
-(id)renditionNameForKeyList:(renditionkeytoken*)arg1;
-(id)renditionInfoForIdentifier:(unsigned short)arg1;
-(void)insertCGImage:(CGImageRef)arg1 withName:(id)arg2 andDescription:(id)arg3;
-(id)themeStore;

@required
-(id)allImageNames;
-(id)mappedAliases;
-(id)localizations;
-(const renditionkeytoken*)renditionKeyForName:(id)arg1;
-(unsigned short)appearanceIdentifierForName:(id)arg1;
-(unsigned short)localizationIdentifierForName:(id)arg1;
-(id)imagesWithName:(id)arg1;
-(BOOL)canGetRenditionWithKey:(const renditionkeytoken*)arg1;
-(id)nameForAppearanceIdentifier:(unsigned short)arg1;
-(id)appearances;
-(BOOL)containsLookupForName:(id)arg1;

@end

