/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

@class _NSPersonNameComponentsStyleFormatterShortVariantGeneral, _NSPersonNameComponentsStyleFormatter;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {

	long long _shortNameFormat;
	_NSPersonNameComponentsStyleFormatterShortVariantGeneral* _variantFormatter;
	_NSPersonNameComponentsStyleFormatter* _subFormatter;
	BOOL _forceShortNameEnabled;

}

@property (assign) long long shortNameFormat; 
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral * variantFormatter; 
@property (retain) _NSPersonNameComponentsStyleFormatter * subFormatter; 
@property (assign) BOOL forceShortNameEnabled; 
-(long long)shortNameFormat;
-(id)orderedKeysOfInterest;
-(_NSPersonNameComponentsStyleFormatter *)subFormatter;
-(BOOL)isEnabled;
-(void)dealloc;
-(id)fallbackStyleFormatter;
-(BOOL)forceShortNameEnabled;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(id)keysOfInterest;
-(_NSPersonNameComponentsStyleFormatterShortVariantGeneral *)variantFormatter;
-(id)initWithMasterFormatter:(id)arg1 ;
-(void)setSubFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(id)abbreviatedKeys;
-(void)setForceShortNameEnabled:(BOOL)arg1 ;
-(void)setShortNameFormat:(long long)arg1 ;
@end
