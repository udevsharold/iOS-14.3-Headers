/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSArray, NSDictionary;

@interface REHTMLElement : NSObject <NSCopying> {

	NSData* _data;

}

@property (nonatomic,readonly) NSArray * classes; 
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSData * encodedData; 
+(id)nav;
+(id)div;
+(id)h1:(id)arg1 ;
+(id)h2:(id)arg1 ;
+(id)h3:(id)arg1 ;
+(id)h4:(id)arg1 ;
+(id)h5:(id)arg1 ;
+(id)h6:(id)arg1 ;
+(id)script:(id)arg1 ;
+(id)elementWithHTMLString:(id)arg1 ;
+(id)htmlElementWithTag:(id)arg1 content:(id)arg2 ;
+(id)link:(id)arg1 title:(id)arg2 ;
+(id)elementWithHTMLData:(id)arg1 ;
+(unsigned long long)_defaultStringEncoding;
-(NSArray *)classes;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addChild:(id)arg1 ;
-(NSData *)encodedData;
-(NSDictionary *)attributes;
-(id)_contentString;
-(id)append:(id)arg1 ;
-(id)_encodedData;
-(id)_encodeString:(id)arg1 ;
-(id)addChildren:(id)arg1 ;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)elementByAddingClass:(id)arg1 ;
-(id)elementByAddingClasses:(id)arg1 ;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
-(id)elementByAddingAtttibute:(id)arg1 value:(id)arg2 ;
-(id)elementByAddingAtttibutes:(id)arg1 ;
@end
