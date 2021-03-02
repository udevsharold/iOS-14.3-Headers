/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableArray, FBSDisplayConfiguration, NSDate, NSArray, NSString;

@interface FBSDisplayLayout : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSMutableArray* _elements;
	FBSDisplayConfiguration* _displayConfiguration;
	long long _interfaceOrientation;
	long long _backlightLevel;
	NSDate* _timestamp;

}

@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long displayBacklightLevel;                             //@synthesize backlightLevel=_backlightLevel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * elements;                                   //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) NSDate * timestamp;                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCDictionary:(id)arg1 ;
-(CGRect)referenceBounds;
-(NSDate *)timestamp;
-(id)init;
-(void)finalizeLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(CGRect)bounds;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)displayType;
-(void)setDisplayBacklightLevel:(long long)arg1 ;
-(void)setDisplayConfiguration:(FBSDisplayConfiguration *)arg1 ;
-(NSArray *)elements;
-(NSString *)description;
-(long long)displayBacklightLevel;
-(id)succinctDescriptionBuilder;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)display;
-(long long)interfaceOrientation;
-(FBSDisplayConfiguration *)displayConfiguration;
-(void)_sortElements;
-(id)_initWithElements:(id)arg1 ;
-(void)removeElement:(id)arg1 ;
@end
