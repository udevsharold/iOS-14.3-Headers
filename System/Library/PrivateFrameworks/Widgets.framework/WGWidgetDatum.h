/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WGDatum.h>

@class NSString, NSExtension;

@interface WGWidgetDatum : NSObject <WGDatum> {

	NSExtension* _representedExtension;

}

@property (nonatomic,readonly) NSExtension * representedExtension;              //@synthesize representedExtension=_representedExtension - In the implementation block
@property (nonatomic,copy,readonly) NSString * datumIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithExtension:(id)arg1 ;
-(NSString *)datumIdentifier;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSExtension *)representedExtension;
@end
