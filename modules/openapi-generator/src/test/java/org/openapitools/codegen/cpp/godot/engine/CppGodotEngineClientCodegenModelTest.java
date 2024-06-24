package org.openapitools.codegen.cpp.godot.engine;

import org.openapitools.codegen.*;
import org.openapitools.codegen.languages.CppGodotEngineClientCodegen;
import io.swagger.models.*;
import io.swagger.models.properties.*;

import org.testng.Assert;
import org.testng.annotations.Test;

@SuppressWarnings("static-method")
public class CppGodotEngineClientCodegenModelTest {

    @Test(description = "convert a simple java model")
    public void simpleModelTest() {
        final Model model = new ModelImpl()
                .description("a sample model")
                .property("id", new LongProperty())
                .property("name", new StringProperty())
                .required("id")
                .required("name");
        final DefaultCodegen codegen = new CppGodotEngineClientCodegen();

        // TODO: Complete this test.
        Assert.fail("Not implemented.");
    }

}

