/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPControl.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol CPControlDelegate;
@class NSUUID, NSArray, CPImageSet, UIImage, NSString;

@interface CPGridButton : NSObject <CPControl, NSSecureCoding> {

	BOOL _enabled;
	NSUUID* _identifier;
	NSArray* _titleVariants;
	/*^block*/id _handler;
	CPImageSet* _imageSet;
	id<CPControlDelegate> _delegate;

}

@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) CPImageSet * imageSet;                              //@synthesize imageSet=_imageSet - In the implementation block
@property (assign,nonatomic,__weak) id<CPControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) NSArray * titleVariants;                          //@synthesize titleVariants=_titleVariants - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)handler;
-(BOOL)isEnabled;
-(UIImage *)image;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)description;
-(id)_init;
-(void)setDelegate:(id<CPControlDelegate>)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id<CPControlDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(CPImageSet *)imageSet;
-(void)handlePrimaryAction;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(NSArray *)titleVariants;
-(id)initWithTitleVariants:(id)arg1 image:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

